% --------------------------------------
% DEMO 3 – Map and Filter (Mercury)
% --------------------------------------

:- module mapfilter.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module list, int, string.

% --------------------------------------
% map_list (Mercury equivalent)
% --------------------------------------

:- func map_list(func(int) = int, list(int)) = list(int).
map_list(_, []) = [].
map_list(Pred, [H | T]) = [Pred(H) | map_list(Pred, T)].

% increment function
:- func inc(int) = int.
inc(X) = X + 1.

% --------------------------------------
% filter_even
% --------------------------------------

:- func filter_even(list(int)) = list(int).
filter_even([]) = [].
filter_even([H | T]) =
    ( if H mod 2 = 0 then
        [H | filter_even(T)]
      else
        filter_even(T)
    ).

% show list nicely
:- func show(list(int)) = string.
show(L) = string.join_list(", ", list.map(string.int_to_string, L)).

% --------------------------------------
% MAIN
% --------------------------------------

main(!IO) :-
    Numbers = [1,2,3,4,5,6],

    IncList  = map_list(inc, Numbers),
    EvenList = filter_even(Numbers),

    io.write_string("Original: [" ++ show(Numbers) ++ "]\n", !IO),
    io.write_string("Incremented: [" ++ show(IncList) ++ "]\n", !IO),
    io.write_string("Even numbers: [" ++ show(EvenList) ++ "]\n", !IO).
