main :: IO()
main = print (sum (map getEven (fibSmallerMax 4000000)))

getEven :: Integral a => a -> a
getEven num
    | even num  = num
    | otherwise = 0

fibSmallerMax :: Integral a => a -> [a]
fibSmallerMax max = aux [2, 1] max where
    aux (xs:ys:x) max
        | xs < max  = aux ((xs + ys) : xs : ys : x) max
        | otherwise = xs:ys:x