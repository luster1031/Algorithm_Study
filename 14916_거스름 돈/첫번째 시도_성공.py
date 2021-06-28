input_num = int(input())
check = []
for i in range(1,input_num+1):
    if (i%2 != 0) &(i %5 != 0) and i < 5:
        check.append(-1)
    else:
        if (i % 5 == 0):
            check.append(i//5)
        elif (i <10 and i % 2 == 0):
                check.append(i//2)
        else :
            check.append(check[i-6] + 1)
        
print(check[input_num-1])
        
