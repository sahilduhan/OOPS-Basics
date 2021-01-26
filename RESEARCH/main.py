import random

my_data = []

for i in range(int(1e10)):
    my_data.append(random.randint(0,9e10))

print("length of the data is",len(my_data))
print(my_data)
