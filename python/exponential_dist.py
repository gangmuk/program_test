import numpy as np

'''
** Relation Between Poisson and Exponential Distribution **
Poisson distribution deals with number of occurences of an event in a time period whereas exponential distribution deals with the time between these events.
'''

'''
Exponential function
scale - inverse of rate ( see lam in poisson distribution ) defaults to 1.0.
size - The shape of the returned array. 10 or [3, 4] or [2, 3, 4]
'''
print()
req_per_sec = 100 # lambda
sc_ = 1 / req_per_sec * 1000

print("np.random.exponential(scale={}, size={})".format(sc_, req_per_sec))
exp_dist=np.random.exponential(scale=sc_, size=req_per_sec)
print("mean: {}".format(sum(exp_dist)/len(exp_dist)))
print("max: {}".format(max(exp_dist)))
print("min: {}".format(min(exp_dist)))
print("sum: {}".format(sum(exp_dist)))
print(exp_dist)

print("noramlized exponential distribution")
sum_ = sum(exp_dist)
norm_exp_dist = [ round(x / sum_, 6) for x in exp_dist ]
print(norm_exp_dist)
print("mean: {}".format(sum(norm_exp_dist)/len(norm_exp_dist)))
print("max: {}".format(max(norm_exp_dist)))
print("min: {}".format(min(norm_exp_dist)))
print("sum: {}".format(sum(norm_exp_dist)))


print()
print()


'''
Poisson function
lam - Expected number of events occurring in a fixed-time interval, must be >= 0. A sequence must be broadcastable over the requested size.
size - The shape of the returned array.
'''
lam_ = 100
size_ = 10
print("np.random.poisson(lam={}, size={})".format(lam_, size_))
poi_dist = np.random.poisson(lam=lam_, size=size_)
print("mean: {}".format(sum(poi_dist)/len(poi_dist)))
print("max: {}".format(max(poi_dist)))
print("min: {}.".format(min(poi_dist)))
print(poi_dist)

