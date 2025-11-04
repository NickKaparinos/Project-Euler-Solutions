num = 2**1000
num_string = str(num)
int_list = [int(i) for i in list(num_string)]
result = sum(int_list)
print(result)
