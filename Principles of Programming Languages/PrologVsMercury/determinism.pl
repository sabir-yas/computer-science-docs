:- initialization(main).

choose_member(X, [X|_]).
choose_member(X, [_|T]) :-
    choose_member(X, T).

is_member(X, [X|_]).
is_member(X, [_|T]) :-
    is_member(X, T).

main :-
    Numbers = [1,2,3],

    write('choose_member results:'), nl,
    ( choose_member(X, Numbers),
      write('  '), write(X), nl,
      fail ; true ),

    ( is_member(2, Numbers) ->
        write('2 is in the list.'), nl ;
        write('2 is NOT in the list.'), nl
    ),

    ( is_member(5, Numbers) ->
        write('5 is in the list.'), nl ;
        write('5 is NOT in the list.'), nl
    ),

    halt.
