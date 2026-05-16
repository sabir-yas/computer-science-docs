:- initialization(main).

edge(a, b).
edge(a, c).
edge(b, d).
edge(c, d).
edge(c, e).
edge(d, f).
edge(e, f).

path(Start, End, Path) :-
    dfs(Start, End, [Start], Rev),
    reverse(Rev, Path).

dfs(End, End, Path, Path).
dfs(Current, End, Visited, Path) :-
    edge(Current, Next),
    \+ member(Next, Visited),
    dfs(Next, End, [Next|Visited], Path).

main :-
    findall(P, path(a, f, P), Paths),
    write('All paths from a to f:'), nl,
    print_paths(Paths),
    halt.

print_paths([]).
print_paths([H|T]) :-
    write('  '), write(H), nl,
    print_paths(T).
