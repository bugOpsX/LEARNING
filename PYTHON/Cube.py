size = 5

# Top
for i in range(size):
    print(" " * (size - i - 1) + "*" + " " * (size*2 - 3) + "*" if i==0 else
          " " * (size - i - 1) + "*" + " " * (size*2 - 3) + "*" )

# Sides
for i in range(size):
    print("*" + " " * (size*2 - 3) + "*" + " " * i + "*")

# Bottom
print("* " * size)
