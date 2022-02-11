def threeOfFive(max):
    sum = 0
    for x in range(max):
        if x % 3 == 0:
            sum += x
        elif x % 5 == 0:
            sum += x
    return sum

if __name__ == '__main__':
    print(threeOfFive(1000))