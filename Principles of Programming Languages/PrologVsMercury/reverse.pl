% --------------------------------------
% DEMO 2 – List Reversal (Prolog)
% --------------------------------------

:- initialization(main).

% Regular recursive reverse
my_reverse([], []).
my_reverse([H|T], R) :-
    my_reverse(T, RT),
    append(RT, [H], R).

% Tail-recursive reverse
my_reverse_tr(L, R) :-
    rev_acc(L, [], R).

rev_acc([], Acc, Acc).
rev_acc([H|T], Acc, R) :-
    rev_acc(T, [H|Acc], R).

main :-
    List = [1,2,3,4,5],
    my_reverse(List, R1),
    my_reverse_tr(List, R2),
    write('Original: '), write(List), nl,
    write('Reverse: '), write(R1), nl,
    write('Tail Rec Reverse: '), write(R2), nl,
    halt.
