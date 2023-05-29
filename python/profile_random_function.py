import random
import numpy as np

NUM_LOOP = 1000000

def normal_random():
    for i in range(NUM_LOOP):
        x = random.random()
    print(x)

def normal_uniform_random():
    for i in range(NUM_LOOP):
        x = random.uniform(0.0, 1.0)
    print(x)

def numpy_uniform_random():
    for i in range(NUM_LOOP):
        x = np.random.uniform(0, 1, 1)[0]
    print(x)
    

if __name__ == "__main__":
    normal_random()
    numpy_uniform_random()
    normal_uniform_random()
