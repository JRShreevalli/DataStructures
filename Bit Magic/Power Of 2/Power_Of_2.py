# APPROACH 1

def Power_Of_2(n):
    if n == 0 :
        return False
    while n!= 1 :
        if n % 2 != 0 :
            return False
        n = n // 2
    return True

n = int(input())
print(Power_Of_2(n))

# we check every time for even num if any one time we get odd num returned then return false
