% --------------------------------------
% DEMO 1 – Calculator,Arithmetic Expression Evaluator (Mercury)
% --------------------------------------

:- module calc.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module int, string.

% Expression type
:- type expr
    ---> add(expr, expr)
    ;    sub(expr, expr)
    ;    mul(expr, expr)
    ;    div(expr, expr)
    ;    num(int).

% Deterministic evaluation
:- func eval(expr) = int.
eval(add(A, B)) = eval(A) + eval(B).
eval(sub(A, B)) = eval(A) - eval(B).
eval(mul(A, B)) = eval(A) * eval(B).
eval(div(A, B)) = eval(A) / eval(B).
eval(num(N))    = N.

% to string
:- func show(expr) = string.
show(add(A, B)) = "(" ++ show(A) ++ " + " ++ show(B) ++ ")".
show(sub(A, B)) = "(" ++ show(A) ++ " - " ++ show(B) ++ ")".
show(mul(A, B)) = "(" ++ show(A) ++ " * " ++ show(B) ++ ")".
show(div(A, B)) = "(" ++ show(A) ++ " / " ++ show(B) ++ ")".
show(num(N))    = string.int_to_string(N).

main(!IO) :-
    Expr = add(num(3), mul(num(4), num(2))), % 3 + (4 * 2)
    Result = eval(Expr),
    io.write_string("Expression: " ++ show(Expr) ++ "\n", !IO),
    io.write_string("Result: " ++ string.int_to_string(Result) ++ "\n", !IO).
