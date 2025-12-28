import multiprocessing as mp
import time

def work(num):
    print(f'Process {num} : Starting')
    time.sleep(3)
    print(f'Process {num} : Finished')

# def main():

#     processes = []
#     tasks = 4
#     for i in range(tasks):
#         process = mp.Process(target=work , args=(i,))
#         processes.append(process)
#         process.start()

# if __name__ == "__main__":
#     main()



# def f(name):
#     print('hello', name)

# if __name__ == '__main__':
#     p = multiprocessing.Process(target=f, args=('bob',))
#     p.start()
#     p.join()


