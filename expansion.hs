pow x n = 
  if n == 1 then x
  else x * pow x (n-1)

fact n = 
  if n == 1 then 1
  else n * fact (n-1)

expansion x n =
  if n == 0 then 1
  else eAproximation x (n-1) + pow x n / fact n
