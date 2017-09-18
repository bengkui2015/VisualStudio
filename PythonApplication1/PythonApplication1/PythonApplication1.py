#password_list = ['*#*#','12345'] 

#def account_login(): 
#	tries = 3 
#	while tries > 0: 
#		password = input(' Password:') 
#		password_correct = password == password_list[- 1] 
#		password_reset = password == password_list[ 0] 
#		if password_correct: 
#			print('Login success!') 
#		elif password_reset: 
#			new_password = input('Enter a new password :') 
#			password_list.append(new_password) 
#			print('Password has changed successfully!') 
#			account_login() 
#		else: 
#			print('Wrong password or invalid input!') 
#			tries = tries - 1 
#			print( tries, 'times left') 
#	else: 
#			print('Your account has been suspended') 
#account_login()

#num_list = [6,2,7,4,1,3,5]
#print(sorted(num_list,reverse=True))

#import time
#a = []
#t0 = time.clock()
#for i in range(1,20):
#	a.append(i)
#print(time.clock() - t0,"seconds process time")
#t0 = time. clock() 
#b = [i+1 for i in range( 1, 20)] 
#print(b)
#print( time. clock() - t0, "seconds process time")

#c = [i** 2 for i in range( 1, 10)]
#print(c)
#for i in range(1,10):
#   print(i**2)

#path = 'C://Users/damon/Desktop/Walden.txt' 
#with open( path,'r') as text: 
#	words = text.read(). split() 
#	print( words) 
#	for word in words: 
#		print('{}-{} times'.format( word,words.count( word)))

ln_path = 'C://Users/damon/Desktop/last_name.txt' 
fn_path = 'C://Users/damon/Desktop/first_name.txt' 
fn = [] 
ln1 = [] #单字 名 
ln2 = [] #双 字 名 
with open(fn_path,'r') as f: 
	for line in f. readlines(): 
		fn. append( line. split('\ n')[ 0]) #如果 这里 看不 明白 不妨 试试 対 其中 的 一行 使用 split 方法 看看 会 返回 回来 什么 结果 
print( fn) 
with open(ln_path,'r') as f: 
	for line in f. readlines(): 
		if len( line. split('\ n')[ 0]) == 1: 
			ln1. append( line. split('\ n')[ 0]) 
		else: ln2. append( line. split('\ n')[ 0]) 
print( ln1) 
print('='* 70) #分 割线 
print( ln2)

import random 
class FakeUser(): 
	def fake_name( self, one_word= False, two_words= False): 
		if one_word: 
			full_name = random. choice( fn) + random. choice( ln1) 
		elif two_words: 
			full_name = random. choice( fn) + random. choice( ln2) 
		else: full_name = random. choice( fn) + random. choice( ln1 + ln2) 
		print( full_name) 
	def fake_gender( self): 
		gender = random. choice([' 男',' 女',' 未知']) 
		print( gender)
class SnsUser(FakeUser): 
	def get_followers( self, few= True, a_lot= False): 
		if few: 
			followers = random.randrange( 1, 50) 
		elif a_lot: 
			followers = random.randrange( 200, 10000) 
	print(followers) 
user_a = FakeUser() 
user_b = SnsUser() 
user_a. fake_name() 
user_b. get_followers( few= True)

class FakeUser(): 
	def fake_name( self, amount= 1, one_word= False, two_words= False): 
		n = 0 
		while n <= amount: 
			if one_word: 
				full_name = random. choice( fn) + random. choice( ln1) 
			elif two_words: 
				full_name = random. choice( fn) + random. choice( ln2) 
			else: 
				full_name = random. choice( fn) + random. choice( ln1 + ln2) 
			yield full_name
			n+= 1 
	def fake_gender( self, amount= 1):
		n = 0 
		while n <= amount: 
			gender = random. choice([' 男',' 女',' 未知']) 
			yield gender 
			n += 1 
class SnsUser( FakeUser): 
	def get_followers( self, amount= 1, few= True, a_lot= False): 
		n = 0 
		while n <= amount : 
			if few: 
				followers = random. randrange( 1, 50) 
			elif a_lot: 
				followers = random. randrange( 200, 10000) 
			yield followers 
			n+= 1 
user_a = FakeUser() 
user_b = SnsUser() 
for name in user_a. fake_names( 30): 
	print( name) 
	for gender in user_a. fake_gender( 30): 
		print( gender)

import sys 
print( sys. path)




