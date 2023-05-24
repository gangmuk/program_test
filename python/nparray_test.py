import numpy as np

#kernel_data = np.zeros([2,2,4,8])
#
#partial_kernel_0 = np.ones([2,2,4,4])*0
#partial_kernel_1 = np.ones([2,2,4,4])*1
#print(partial_kernel_0)
#print()
#print()
#print(partial_kernel_1)

dim = [2, 2, 2, 4]
for i in dim[0]:
  for j in dim[1]:
    for k in dim[2]:
      for m in dim[3]:
