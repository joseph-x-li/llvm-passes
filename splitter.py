with open("dump.txt") as f:
    # read in entire file and split on "*** IR"
    file = f.read().split("*** IR")
    pages = ["*** IR" + page for page in file]
    # write page i to file llir.i
    for idx, page in enumerate(pages):
        with open(f"llir.{idx}", "w") as f:
            f.write(page)