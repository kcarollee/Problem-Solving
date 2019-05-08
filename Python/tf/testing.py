import tensorflow as tf
import numpy as np

scalar = tf.constant(100)
vector = tf.constant([1, 2, 3, 4, 5])

print(scalar.get_shape())


tensor_1d = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
tensor_1d = tf.constant(tensor_1d)
with tf.Session() as sess:
	print(tensor_1d.get_shape())
	print(sess.run(tensor_1d))


