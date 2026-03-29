import hashlib

s = input()
hash_result = hashlib.sha256(s.encode('utf-8')).hexdigest()

print(hash_result)
