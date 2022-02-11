main :: IO()
main = print (sumMultiples 1000)

sumMultiples :: Integral a => a -> a
sumMultiples max = sum (map threeOfFive [0 .. (max - 1)])

threeOfFive :: Integral a => a -> a
threeOfFive num
    | mod num 3 == 0 = num
    | mod num 5 == 0 = num
    | otherwise = 0