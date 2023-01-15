#Hashing
search 
Insert
Delete

O(1) on average

not useful for:
- Finding closest value
- Sorted Data
- Prefix Searching



# *Application of Hashing*
1. Dictionaries
2. Database Indexing
3. Cryptography
4. Caches
5. Symbol Tables in Compliers/ Interpreters
6. Routers
7. Getting data from database
8. etc....


# Direct Address Table
- Imaggin a situation where you have 1000 keys with values from (0 to 999), how would you implement following in O(1) time
	- Search
	- Insert
	- Delete

# Hashing Introduction
## How Hash Function Work?
- show always map a large to same small key
- should generate value from 0 to m-1
- should be fast, O(1) for integer and O(len) for string of length 'len'
- should uniformly distribute large keys into Hash Table slots

# Collision Handling
- if we know keys in advance, then we can Perfect Hashing.
- if we do not know keys, then we use one of the following
	- Chaining
	- Open Addresing
		- Linear Probling
		- Quadratic Probling
		- Double Hashing

# Chaining
















