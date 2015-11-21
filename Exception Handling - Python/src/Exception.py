while True:
    try:
        f = open("file.txt")
        break
    except IOError as e:
        print("I/O error occurred!{0}".format(e.errno))
        break
    else:
        f.close()
    finally:
        print("Is done")    