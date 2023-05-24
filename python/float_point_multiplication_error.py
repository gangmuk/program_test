import numpy as np

np.random.seed(1)

np_arr = np.random.randn(1000)
#np_arr = np.random.rand(1000)

mul_result_1 = 1.0
mul_result_2 = 1.0
sum_result_1 = 1.0
sum_result_2 = 1.0

for i in range(len(np_arr)):
  mul_result_1 *= np_arr[i]
  mul_result_2 *= np_arr[len(np_arr)-i-1]
  sum_result_1 += np_arr[i]
  sum_result_2 += np_arr[len(np_arr)-i-1]

print("mul_result_1: ", mul_result_1)
print("mul_result_2: ", mul_result_2)
print("sum_result_1: ", sum_result_1)
print("sum_result_2: ", sum_result_2)

