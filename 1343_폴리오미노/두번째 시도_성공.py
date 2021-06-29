#1343
import sys
input_str= str(input())
count = 0
output = ""
for i in range(len(input_str)+1):
    if i == len(input_str) or input_str[i] == '.' :
        if count % 2 != 0:
            print("-1")
            sys.exit()
        
        while(count //4 != 0):
            output += "AAAA"
            count -= 4
        while (count//2 != 0):
            output += "BB"
            count -= 2
        if i != len(input_str):
            output += "."
            count = 0
            
    else:
        count+=1
        
print(output)
        
