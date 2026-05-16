% --------------------------------------
% DEMO 4 – Depth-First Search (Mercury)
% --------------------------------------

:- module graphdfs.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module list, string.

% -----------------------------
% Graph node type
% -----------------------------
:- type node
    ---> a
    ;    b
    ;    c
    ;    d
    ;    e.

% -----------------------------
% Graph edges (directed)
% -----------------------------
:- pred edge(node::in, node::in) is semidet.

edge(a, b).
edge(a, c).
edge(b, d).
edge(c, d).
edge(c, e).
edge(d, e).

% -----------------------------
% DFS wrapper
% -----------------------------
:- func dfs(node) = list(node).
dfs(Start) = Result :-
    dfs_visit(Start, [], Result0),
    list.reverse(Result0, Result).

% -----------------------------
% DFS worker
% dfs_visit(Node, Visited, NewVisited)
% -----------------------------
:- pred dfs_visit(node::in, list(node)::in, list(node)::out) is det.
dfs_visit(N, !Visited) :-
    ( if list.member(N, !.Visited) then
        % already visited: do nothing
        true
    else
        % visit node
        !:Visited = [N | !.Visited],
        successors(N, Nexts),
        dfs_list(Nexts, !Visited)
    ).

% -----------------------------
% Get successor list
% -----------------------------
:- pred successors(node::in, list(node)::out) is det.
successors(N, Nodes) :-
    Nodes = list.filter(
        (pred(X::in) is semidet :- edge(N, X)),
        all_nodes ).

% Full list of nodes for filtering
:- func all_nodes = list(node).
all_nodes = [a, b, c, d, e].

% -----------------------------
% DFS over a list
% -----------------------------
:- pred dfs_list(list(node)::in, list(node)::in, list(node)::out) is det.
dfs_list([], !Visited).
dfs_list([H | T], !Visited) :-
    dfs_visit(H, !Visited),
    dfs_list(T, !Visited).

% -----------------------------
% Pretty-print nodes as string
% -----------------------------
:- func show(list(node)) = string.
show(L) = string.join_list(", ",
    list.map((func(N) = node_to_string(N)), L)).

:- func node_to_string(node) = string.
node_to_string(a) = "a".
node_to_string(b) = "b".
node_to_string(c) = "c".
node_to_string(d) = "d".
node_to_string(e) = "e".

% -----------------------------
% MAIN
% -----------------------------
main(!IO) :-
    Result = dfs(a),
    io.write_string("DFS starting from a: [" ++ show(Result) ++ "]\n", !IO).
