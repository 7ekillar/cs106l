# Assignment 1: SimpleEnroll

Due Friday, October 17th, at 11:59PM

## Overview

It’s that time of the quarter again; time to use SimpleEnroll 🤗 Wootwoot.
One thing everyone realizes in their Stanford career at one point is that they
have to eventually graduate — and so enrolling in classes becomes a strategic
endeavor to maximize the XP towards graduation, while also being able to sleep
more than 4 hours a night!

In this hopefully short assignment, we’re going to use data from the
ExploreCourses API to figure out which CS classes on ExploreCourses are
offered this year, and which are not! We’ll be taking advantage of streams, while also exercising initialization and references in C++. Lets jump in ʕ•́ᴥ•̀ʔっ

There are only two files you should need to care about:

* `main.cpp`: All your code goes here 😀!
* `utils.cpp`: Contains some utility functions. You'll use functions defined in this file, but you don't otherwise need to modify it.

## Running your code

To run your code, first you'll need to compile it. Open up a terminal (if you are using VSCode, hit <kbd>Ctrl+\`</kbd> or go to **Terminal > New Terminal** at the top). Then make sure that you are in the `assignment1/` directory and run:

```sh
g++ -std=c++20 main.cpp -o main
```

Assuming that your code compiles without any compiler errors, you can now do:

```sh
./main
```

which will actually run the `main` function in `main.cpp`. This will execute your code and then run an autograder that will check that your code is correct.

As you are following the instructions below, we recommend intermittently compiling/testing with the autograder as a way to make sure you're on the right track!

> [!NOTE]  
> ### Note for Windows
> On Windows, you may need to compile your code using
> ```sh
> g++ -static-libstdc++ -std=c++20 main.cpp -o main
> ```
> in order to see output. Also, the output executable may be called `main.exe`, in which case you'll run your code with:
> ```sh
> ./main.exe
> ```

## Part 0: Read the code and fill in the `Course` struct

1. In this assignment, we'll be using the `Course` struct to represent records pulled from ExploreCourses in C++. Take a look at the (incomplete) definition of the `Course` struct in `main.cpp` and fill in the field definitions. Ultimately, we'll be using streams to generate `Course`s ---  remember what types streams deal with?

2. Take a look at the `main` function in `main.cpp`, and take special notice of how `courses` is passed into `parse_csv`, `write_courses_offered`,
and `write_courses_not_offered`. Think about what these functions are doing. Do you need to change anything in the function definition? Spoiler, you do.

## Part 1: `parse_csv`

Check out `courses.csv`, it is a CSV file, with three columns: Title, Number of
Units, and Quarter. Implement `parse_csv` so that, for each line in the csv file, it creates a struct `Course` containing the Title, Number of Units, and Quarter for that line.

A couple of things you need to think about:
1. How are you going to read in `courses.csv`? Muahahaha, perhaps a
stream 😏?
2. How will you get each line in the file?

### Hints

1. Take a look at the `split` function we provide in `utils.cpp`. It may come in handy!
    * Feel free to check out the implementation of `split` and ask us any questions about it – you
should be able to reason about it since it’s using a `stringstream`.
2. Each **line** is a record! *This is important, so we're saying it again :>)*
3. In CSV files (and specifically in `courses.csv`), the first line is usually a row that defines the column names (a column header row). This line doesn't actually correspond to a `Course`, so you'll need to skip it somehow!

## Part 2: `write_courses_offered`

Ok. Now you have a populated `courses` vector which has all of the records
of the `courses.csv` file neatly stored in a `Course` struct! You find yourself
interested in only the courses that are offered, right? **A course is considered offered if its Quarter field is not the string `“null”`.** In this function, write out to `“student_output/courses_offered.csv”` all the courses that don’t have
`“null”` in the quarter field.

> [!IMPORTANT]  
> When writing out to the CSV file, please follow this format:
> ```
> <Title>,<Number of Units>,<Quarter>
> ```
> Note that there are **no spaces** between the commas! The autograder will not be happy if this format is not followed!
>
> Also, **make sure to write out the column header row** as the first line in the output. This is the same line you had to skip in `courses.csv` for the previous step!

Once `write_courses_offered` has been called, we expect that all of the offered courses (and consequently all the courses you wrote to the output file) will be removed from the `all_courses` vector. **This means that after this
function runs, `all_courses` should ONLY contain courses that are
not offered!** 

One way to do this is to keep track of the courses that are offered perhaps with another vector and delete them from `all_courses`. Just like in Python and many other languages, it is a bad idea to remove elements from a data structure while you are iterating over it, so you'll probably want to do this *after* you have written all offered courses to file.

## Part 3: `write_courses_not_offered`

So you’re curious about courses that aren’t offered... In the
`write_courses_not_offered` function, write out to
`“student_output/courses_not_offered.csv”` the courses in
`unlisted_courses`. Remember since you deleted the courses that are
offered in the previous step, `unlisted_courses` trivially contains ONLY courses that are not offered – lucky you. So this step should look really similar to Part 2 except shorter and a *tiny* bit simpler.

## 🚀 Submission Instructions

After compiling and running, if your autograder looks like this:

![An image showing a terminal window where the autograder has run with all tests passing](docs/autograder.png)

then you have finished the assignment! Woot woot. 

To submit the assignment:
1. Please complete the feedback form [at this link](https://forms.gle/UeD6zjmUpFbhGgw98). 
2. Submit your assignment on [Paperless](https://paperless.stanford.edu)!

Your deliverable should be:

- `main.cpp`

# 作业 1: SimpleEnroll

截止日期：10月17日星期五晚上11:59

## 概述

又到了每个 quarter 的那个时候了；是时候使用 SimpleEnroll 了 🤗 哇呜哇呜。
每个斯坦福学生在学习生涯中的某个时刻都会意识到一件事：他们最终必须毕业——因此选课变成了一项战略任务，既要最大化毕业所需的经验值，又要保证每晚睡眠超过 4 小时！

在这个预计较短的作业中，我们将使用 ExploreCourses API 的数据，来找出 ExploreCourses 上的哪些 CS 课程今年开设了，哪些没有开设！我们将利用流，同时练习 C++ 中的初始化和引用。让我们开始吧 ʕ•́ᴥ•̀ʔっ

你只需要关注两个文件：

* `main.cpp`：你的所有代码都在这里 😀！
* `utils.cpp`：包含一些实用函数。你将使用此文件中定义的函数，但不需要修改它。

## 运行代码

要运行代码，首先需要编译它。打开一个终端（如果你使用 VSCode，按 <kbd>Ctrl+\`</kbd> 或转到顶部的 **终端 > 新建终端**）。然后确保你在 `assignment1/` 目录下，运行：

```sh
g++ -std=c++20 main.cpp -o main
```

假设你的代码编译没有错误，现在可以执行：

```sh
./main
```

这将实际运行 `main.cpp` 中的 `main` 函数。它会执行你的代码，然后运行一个自动评分器来检查你的代码是否正确。

在按照以下说明操作时，我们建议间歇性地编译/使用自动评分器测试，以确保你走在正确的轨道上！

> [!NOTE]  
> ### Windows 用户注意
> 在 Windows 上，你可能需要使用以下命令编译代码：
> ```sh
> g++ -static-libstdc++ -std=c++20 main.cpp -o main
> ```
> 才能看到输出。此外，输出的可执行文件可能名为 `main.exe`，在这种情况下，你需要使用以下命令运行代码：
> ```sh
> ./main.exe
> ```

## 第 0 部分：阅读代码并填充 `Course` 结构体

1. 在本作业中，我们将使用 `Course` 结构体来表示从 ExploreCourses 中提取的记录。查看 `main.cpp` 中 `Course` 结构体的（不完整）定义，并填写字段定义。最终，我们将使用流来生成 `Course` 对象——记住流可以处理哪些类型？

2. 查看 `main.cpp` 中的 `main` 函数，特别注意 `courses` 是如何传递给 `parse_csv`、`write_courses_offered` 和 `write_courses_not_offered` 的。思考这些函数的功能。你是否需要更改函数定义中的某些内容？剧透：需要。

## 第 1 部分：`parse_csv`

查看 `courses.csv`，它是一个 CSV 文件，包含三列：课程名称、学分数和学期。实现 `parse_csv`，使其为 csv 文件中的每一行创建一个包含该行课程名称、学分数和学期的 `Course` 结构体。

你需要考虑以下几点：
1. 你将如何读取 `courses.csv`？唔哈哈哈，也许是用流 😏？
2. 你将如何获取文件中的每一行？

### 提示

1. 查看我们在 `utils.cpp` 中提供的 `split` 函数。它可能会派上用场！
    * 可以查看 `split` 的实现并随时向我们提问——你应该能够理解它，因为它使用了 `stringstream`。
2. 每一**行**就是一条记录！*这很重要，所以我们再说一遍 :>)*
3. 在 CSV 文件中（特别是在 `courses.csv` 中），第一行通常是定义列名的行（列标题行）。这一行实际上并不对应一个 `Course` 对象，所以你需要以某种方式跳过它！

## 第 2 部分：`write_courses_offered`

好了。现在你有了一个填充好的 `courses` 向量，其中 `courses.csv` 文件的所有记录都整齐地存储在 `Course` 结构体中！你发现自己只对开设的课程感兴趣，对吗？**如果某门课程的学期字段不是字符串 `“null”`，则认为该课程已开设。** 在此函数中，将所有学期字段不为 `“null”` 的课程写入 `“student_output/courses_offered.csv”`。

> [!IMPORTANT]  
> 写入 CSV 文件时，请遵循以下格式：
> ```
> <课程名称>,<学分数>,<学期>
> ```
> 注意逗号之间**没有空格**！如果不遵循此格式，自动评分器将不满意！
>
> 另外，**确保将列标题行作为第一行写入输出文件**。这与你在上一步中需要在 `courses.csv` 中跳过的行相同！

一旦调用了 `write_courses_offered`，我们期望所有开设的课程（以及你写入输出文件的所有课程）都将从 `all_courses` 向量中删除。**这意味着在此函数运行后，`all_courses` 应该只包含未开设的课程！**

一种实现方法是使用另一个向量跟踪开设的课程，然后将它们从 `all_courses` 中删除。就像在 Python 和许多其他语言中一样，在迭代数据结构时从中移除元素是不好的做法，因此你可能需要在将所有开设课程写入文件之后再进行删除操作。

## 第 3 部分：`write_courses_not_offered`

那么你对未开设的课程感到好奇……在 `write_courses_not_offered` 函数中，将 `unlisted_courses` 中的课程写入 `“student_output/courses_not_offered.csv”`。请记住，由于你在上一步中删除了开设的课程，`unlisted_courses` 自然只包含未开设的课程——你很幸运。所以这一步应该看起来与第 2 部分非常相似，只是更短且稍微简单一点。

## 🚀 提交说明

编译并运行后，如果你的自动评分器看起来像这样：

![显示一个终端窗口，其中自动评分器已运行且所有测试均通过的图片](docs/autograder.png)

那么你就完成了作业！哇呜哇呜。

提交作业：
1. 请填写[此链接](https://forms.gle/UeD6zjmUpFbhGgw98)的反馈表。
2. 在 [Paperless](https://paperless.stanford.edu) 上提交你的作业！

你需要提交的文件是：

- `main.cpp`