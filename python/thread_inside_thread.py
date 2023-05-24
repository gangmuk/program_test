import threading
import random
import time

def adder(x, res, i):
    sleep_t = random.random()
    print("sleep for {}".format(sleep_t))
    time.sleep(sleep_t)
    res[i] += x*i
    print("{} adder".format(i))

def creator(a, threads, results):
    for i in range(a):
        results.append(0)
        t = threading.Thread(target=adder, args=(a, results, i))
        threads.append(t)

    for t in threads:
        t.start()

    for t in threads:
        t.join()

threads = []
results = []

mainThread = threading.Thread(target=creator, args=(5, threads, results))
mainThread.start()
mainThread.join()

for i in range(len(results)):
    print(results[i])
    print(threads[i])