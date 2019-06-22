import queue

print("STACK")
# stack

l = queue.LifoQueue(maxsize=20)
l.put(5)
l.put(6)
l.put(7)
l.get()
for i in list(l.queue):
    print(i)



print("\n\n QUEUE ")
# Queue

l1 = queue.Queue(maxsize=20)
l1.put(5)
l1.put(6)
l1.put(7)
l1.get()
for i in l1.queue:
    print(i)
