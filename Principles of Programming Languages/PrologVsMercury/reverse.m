% --------------------------------------
% DEMO 2 – List Reversal (Mercury)
% --------------------------------------

:- module reverse.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module list, string, int.

% Recursive reverse
:- func my_reverse(list(int)) = list(int).
my_reverse([]) = [].
my_reverse([H | T]) = my_reverse(T) ++ [H].

% Tail-recursive reverse
:- func my_reverse_tr(list(int)) = list(int).
my_reverse_tr(L) = rev_acc(L, []).

:- func rev_acc(list(int), list(int)) = list(int).
rev_acc([], Acc) = Acc.
rev_acc([H | T], Acc) = rev_acc(T, [H | Acc]).

:- func show(list(int)) = string.
show(L) = string.join_list(", ", list.map(string.int_to_string, L)).

main(!IO) :-
    List = [1,2,3,4,5],
    R1 = my_reverse(List),
    R2 = my_reverse_tr(List),
    io.write_string("Original: [" ++ show(List) ++ "]\n", !IO),
    io.write_string("Reverse: [" ++ show(R1) ++ "]\n", !IO),
    io.write_string("Tail Rec Reverse: [" ++ show(R2) ++ "]\n", !IO).
