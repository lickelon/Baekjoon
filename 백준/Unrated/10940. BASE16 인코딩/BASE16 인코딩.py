import base64
print(base64.b16encode(input().strip().encode('utf-8')).decode('utf-8'))