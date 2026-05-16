% --------------------------------------
% DEMO 5 – Determinism in Mercury (FINAL)
% Using solutions module for reliable nondet/multi collection
% --------------------------------------

:- module determinism.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module int, list, string, solutions.

% --------------------------------------
% det example
% --------------------------------------

:- func square(int) = int.
square(X) = X * X.

% --------------------------------------
% semidet example
% --------------------------------------

:- pred is_even(int::in) is semidet.
is_even(X) :-
    X mod 2 = 0.

% --------------------------------------
% nondet example
% --------------------------------------

:- pred member_of(list(int)::in, int::out) is nondet.
member_of([H | T], X) :-
    ( X = H
    ; member_of(T, X)
    ).

:- pred member_sol(list(int)::in, int::out) is nondet.
member_sol(List, X) :-
    member_of(List, X).

% Collect nondet results
:- func collect_members(list(int)) = list(int).
collect_members(List) =
    solutions((pred(X::out) is nondet :- member_sol(List, X))).

% --------------------------------------
% multi example
% --------------------------------------

:- pred between(int::in, int::in, int::out) is nondet.
between(Low, High, Low) :- Low =< High.
between(Low, High, X) :-
    Next = Low + 1,
    Next =< High,
    between(Next, High, X).

:- pred factor_sol(int::in, int::out) is nondet.
factor_sol(N, F) :-
    between(1, N, F),
    N mod F = 0.

% Collect multi results
:- func collect_factors(int) = list(int).
collect_factors(N) =
    solutions((pred(F::out) is nondet :- factor_sol(N, F))).

% --------------------------------------
% Show list
% --------------------------------------

:- func show_list(list(int)) = string.
show_list(L) =
    string.join_list(", ", list.map(string.int_to_string, L)).

% --------------------------------------
% MAIN
% --------------------------------------

main(!IO) :-
    % det
    io.write_string("det: square(5) = " ++ string.int_to_string(square(5)) ++ "\n", !IO),

    % semidet
    io.write_string("semidet: is_even(4)? ", !IO),
    ( if is_even(4) then io.write_string("yes\n", !IO)
      else io.write_string("no\n", !IO)
    ),

    io.write_string("semidet: is_even(5)? ", !IO),
    ( if is_even(5) then io.write_string("yes\n", !IO)
      else io.write_string("no\n", !IO)
    ),

    % nondet (now correct)
    Members = collect_members([1,2,3]),
    io.write_string("nondet: members of [1,2,3]: [" ++ show_list(Members) ++ "]\n", !IO),

    % multi (now correct)
    Facs = collect_factors(12),
    io.write_string("multi: factors of 12: [" ++ show_list(Facs) ++ "]\n", !IO).
