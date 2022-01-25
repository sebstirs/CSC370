# CSC370
Repository for Class CSC 370
Many times, certain data file types can consist of large
amounts of repeated data. For instance, images can have
large runs of the same color. This can be easily compressed
using a technique called run length encoding. With run
length encoding, large amounts of repeated data are stored
as the repeated data and the number of times to repeat it.
The return value should be a String which has been encoded
with the following algorithm:
If any character is repeated more than 4 times, the entire
set of repeated characters should be replaced with a slash
'/', followed by a 2-digit number which is the length of
the set of characters, and the character. For example,
"aaaaa" would be encoded as "/05a". Runs of 4 or less
characters should not be replaced since performing the
encoding would not decrease the length of the string.
