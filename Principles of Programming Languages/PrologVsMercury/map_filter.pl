:- initialization(main).

map_list(_, [], []).
map_list(Pred, [H|T], [R|RT]) :-
    call(Pred, H, R),
    map_list(Pred, T, RT).

inc(X, Y) :- Y is X + 1.

filter_even([], []).
filter_even([H|T], [H|Rest]) :-
    0 is H mod 2,
    filter_even(T, Rest).
filter_even([_|T], Rest) :-
    filter_even(T, Rest).

main :-
    Numbers = [1,2,3,4,5,6],

    map_list(inc, Numbers, IncList),
    filter_even(Numbers, EvenList),

    write('Original: '), write(Numbers), nl,
    write('Incremented: '), write(IncList), nl,
    write('Even numbers: '), write(EvenList), nl,

    halt.
