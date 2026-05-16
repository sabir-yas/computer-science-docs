% --------------------------------------
% DEMO 1 – Arithmetic Expression Evaluator (Prolog)
% --------------------------------------

:- initialization(main).

% evaluate(+Expression, -Value)
evaluate(add(A, B), R) :-
    evaluate(A, RA),
    evaluate(B, RB),
    R is RA + RB.

evaluate(sub(A, B), R) :-
    evaluate(A, RA),
    evaluate(B, RB),
    R is RA - RB.

evaluate(mul(A, B), R) :-
    evaluate(A, RA),
    evaluate(B, RB),
    R is RA * RB.

evaluate(div(A, B), R) :-
    evaluate(A, RA),
    evaluate(B, RB),
    R is RA / RB.

% Base case: evaluate number
evaluate(N, N) :- number(N).

main :-
    Expr = add(3, mul(4, 2)),      % 3 + (4 * 2)
    evaluate(Expr, Result),
    write('Expression: '), write(Expr), nl,
    write('Result: '), write(Result), nl,
    halt.
