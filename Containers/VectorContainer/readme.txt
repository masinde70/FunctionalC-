NOTE:

It is better to always use the at() method instead of the [] operator when we want to access the specific element by its index in a vector instance. It's because, when we accidentally access the out of range position, the at() method will throw an out_of_range exception. Otherwise, the [] operator will give undefined behavior.
