coin = [500,100,50,10,5,1]
input_num = int(input())
output = 0
input_num = 1000-input_num
for i in range(6):
    while (input_num//coin[i]) != 0:
        output += input_num//coin[i]
        input_num %= coin[i]
        
print(output)
