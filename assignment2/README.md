<p align="center">
  <img src="docs/marriage_pact.png" alt="Marriage Pact Logo" />
</p>

# Assignment 2: Marriage Pact

Due Saturday, October 25th at 11:59PM

## Overview

Happy assignment 2! This is meant to be a very short and sweet bit of practice to get you started working with the STL's containers and pointers.

These are the files you need to care about:

- `main.cpp`: All your code goes here 😀!
- `short_answer.txt`: Short answer responses go here 📝!

To download the starter code for this assignment, please see the instructions for [**Getting Started**](../README.md#getting-started) on the course assignments repository.

## Running your code

To run your code, first you'll need to compile it. Open up a terminal (if you are using VSCode, hit <kbd>Ctrl+\`</kbd> or go to **Terminal > New Terminal** at the top). Then make sure that you are in the `assignment2/` directory and run:

```sh
g++ -std=c++20 main.cpp -o main
```

Assuming that your code compiles without any compiler errors, you can now do:

```sh
./main
```

which will actually run the `main` function in `main.cpp`.

As you are following the instructions below, we recommend intermittently compiling/testing with the autograder as a way to make sure you're on the right track!

> [!NOTE]
>
> ### Note for Windows
>
> On Windows, you may need to compile your code using
>
> ```sh
> g++ -static-libstdc++ -std=c++20 main.cpp -o main
> ```
>
> in order to see output. Also, the output executable may be called `main.exe`, in which case you'll run your code with:
>
> ```sh
> ./main.exe
> ```

## Part 0: Setup

Welcome to the Marriage Pact! Before you begin, we'll need to know your name. Please change the constant `kYourName` at the top of `main.cpp` from `"STUDENT TODO"` to your full name (with a space between first and last).

## Part 1: Get all applicants

You’ve been waiting for days to get your Marriage Pact initials this year, and they’ve finally arrived in your inbox! This year, they’re implementing a new rule: your match MUST share your own initials to be eligible. However, even after talking about it for hours with your friends, you have no idea who your match could be! There are thousands of students on campus, and you can’t just go through the whole roster by hand to draft up a list of your potential soulmates. Fortunately enough for you, you’re in CS106L, and you remember that C++ has a pretty quick method of going through collected, similar information – containers!

We’ve included a `.txt` file of all of the (fictional) students who signed up for The Marriage Pact this year (`students.txt`). Each line includes the first and last name of the student. You will first write the function `get_applicants`:

> [!IMPORTANT]
>
> ### `get_applicants`
>
> From the `.txt` file, parse all of the names into a set. Each line contained in the file named `filename` is a single applicant's name. In your implementation, you are free to choose between an ordered (`std::set`) and unordered set (`std::unordered_set`) as you wish! If you do choose to use an unordered set, please change the relevant function definitions!

Additionally, please answer the following short answer question in `short_answer.txt`:

> [!IMPORTANT]
>
> ### `short_answer.txt`
>
> **Q1:** It is your choice to use either an ordered or unordered set. In a few sentences, what are some of the tradeoffs between the two? Additionally, please give an example (that has not been shown in lecture) of a valid hash function that could be used to hash student names for an unordered set.

> [!NOTE]
> All names appearing in this assignment are fictitious. Any resemblance to real persons, living or dead, is purely coincidental.

## Part 2: Find matches

Great detective work! Now that you’ve narrowed down your list of potential soulmates, it’s time to put it to the test. After a long day of acapella and consulting club meetings, you return to your dorm to learn from your roommate that there is a mixer for Marriage Pact matches at Main Quad that night! Your best chance of finding true love is imminent — if only you can get out of your Ultimate Frisbee practice. Quickly, you decide to interview everyone who shares your initials at the mixer, and you get to work coding up a function that will compile the order for you automatically.

For this section, you will write the functions `find_matches` and `get_match`:

> [!IMPORTANT]
>
> ### `find_matches`
>
> From the set `students` (generated in the previous part), take all names that share initials with the parameter `name` and place pointers to them in a new `std::queue`.
>
> - If you’re having trouble figuring out how to iterate through a set, it could be helpful to look back over [Thursday’s lecture on iterators and pointers](https://office365stanford-my.sharepoint.com/:p:/g/personal/jtrb_stanford_edu/EbOKUV784rBHrO3JIhUSAUgBvuIGn5rSU8h3xbq-Q1JFfQ?e=BlZwa7).
> - You will need to be familiar with the operations of a `std::queue` for this part. Take a look at cppreference's documentation [here](https://en.cppreference.com/w/cpp/container/queue).
> - Hint: It might help to define a helper function that computes the initials of some student's name. Then you can use that helper function to compare the initials of `name` with the initials of each name in `students`.

From here please implement the function `get_match` to find your “one true match.”:

> [!IMPORTANT]
>
> ### `get_match`
>
> Gets your “one true match” from the queue of all possible matches. This can be determined as you see fit; choose some method of acquiring one student from the queue, ideally something with a bit more thought than a single `pop()`, but it doesn’t have to be particularly complicated! Consider random values or other methods of selection.
>
> If your initials have no matches in the dataset, print `“NO MATCHES FOUND.”` Better luck next year 😢

Afterwards, answer the following question in `short_answer.txt`:

> [!IMPORTANT]
>
> ### `short_answer.txt`
>
> **Q2:** Note that we are saving pointers to names in the queue, not names themselves. Why might this be desired in this problem? What happens if the original set where the names are stored goes out of scope and the pointers are referenced?

## 🚀 Submission Instructions

To submit the assignment:
1. Please complete the feedback form [at this link](https://forms.gle/Zv27LwmtCPz88Kg46). 
2. Submit your assignment on [Paperless](https://paperless.stanford.edu)!

Your deliverable should be:

- `main.cpp`
- `short_answer.txt`

You may resubmit as many times as you'd like before the deadline.


<p align="center">
  <img src="docs/marriage_pact.png" alt="婚姻协议标志" />
</p>

# 作业 2：婚姻协议

截止日期：10月25日星期六晚上11:59

## 概述

作业2快乐！这是一个非常简短而甜蜜的练习，旨在帮助你开始使用STL的容器和指针。

你需要关注的文件如下：

- `main.cpp`：所有代码都在这里 😀！
- `short_answer.txt`：简答题答案写在这里 📝！

要下载此作业的起始代码，请参阅课程作业仓库中的[**入门指南**](../README.md#getting-started)。

## 运行代码

要运行代码，首先需要编译它。打开一个终端（如果使用VSCode，按<kbd>Ctrl+\`</kbd>或转到顶部菜单**终端 > 新建终端**）。然后确保你在`assignment2/`目录下，运行：

```sh
g++ -std=c++20 main.cpp -o main
```

假设你的代码编译没有错误，现在可以执行：

```sh
./main
```

这将实际运行`main.cpp`中的`main`函数。

在按照以下说明操作时，我们建议间歇性地编译/测试，以确保你走在正确的轨道上！

> [!NOTE]
>
> ### Windows用户注意
>
> 在Windows上，你可能需要使用以下命令编译代码：
>
> ```sh
> g++ -static-libstdc++ -std=c++20 main.cpp -o main
> ```
>
> 才能看到输出。此外，输出的可执行文件可能名为`main.exe`，在这种情况下，你需要使用以下命令运行代码：
>
> ```sh
> ./main.exe
> ```

## 第0部分：设置

欢迎来到婚姻协议！在开始之前，我们需要知道你的名字。请将`main.cpp`顶部的常量`kYourName`从`"STUDENT TODO"`改为你的全名（名和姓之间用空格分隔）。

## 第1部分：获取所有申请者

你已经等了好几天，想看看今年的婚姻协议初始结果，它们终于到了你的收件箱！今年，他们实施了一项新规则：你的匹配对象必须和你的名字首字母相同才符合条件。然而，即使和朋友们讨论了几个小时，你还是不知道你的匹配对象可能是谁！校园里有成千上万的学生，你不可能手动翻遍整个名单来列出一个潜在灵魂伴侣的清单。幸运的是，你在CS106L课上，记得C++有一种相当快速的方法来处理收集到的相似信息——容器！

我们提供了一个`.txt`文件，里面包含了今年报名参加婚姻协议的所有（虚构）学生（`students.txt`）。每一行包括学生的名和姓。你首先要编写`get_applicants`函数：

> [!IMPORTANT]
>
> ### `get_applicants`
>
> 从`.txt`文件中解析所有名字，存入一个集合中。名为`filename`的文件中的每一行都是一个申请者的姓名。在实现中，你可以自由选择使用有序集合（`std::set`）或无序集合（`std::unordered_set`）！如果你选择使用无序集合，请相应地修改相关的函数定义！

此外，请在`short_answer.txt`中回答以下简答题：

> [!IMPORTANT]
>
> ### `short_answer.txt`
>
> **问1：** 你可以选择使用有序集合或无序集合。请用几句话说明两者之间的一些权衡。另外，请给出一个（未在课堂上展示过的）可用于将学生姓名哈希到无序集合的有效哈希函数的例子。

> [!NOTE]
> 本作业中出现的所有姓名均为虚构。与任何现实人物（无论健在或已故）的相似之处纯属巧合。

## 第2部分：寻找匹配对象

干得好，侦探！现在你已经缩小了潜在灵魂伴侣的名单，是时候接受考验了。经过一整天的无伴奏合唱和咨询社团会议，你回到宿舍，从室友那里得知当晚在主方庭有一场婚姻协议匹配对象的交流会！你找到真爱的最大机会近在眼前——只要你能够不去参加极限飞盘训练。你迅速决定在交流会上采访所有与你名字首字母相同的人，并开始编写一个能自动为你整理顺序的函数。

在这一部分，你将编写`find_matches`和`get_match`函数：

> [!IMPORTANT]
>
> ### `find_matches`
>
> 从集合`students`（上一部分生成）中，取出所有与参数`name`首字母相同的名字，并将指向它们的指针放入一个新的`std::queue`中。
>
> - 如果你不知道如何遍历集合，回顾一下[周四关于迭代器和指针的课程](https://office365stanford-my.sharepoint.com/:p:/g/personal/jtrb_stanford_edu/EbOKUV784rBHrO3JIhUSAUgBvuIGn5rSU8h3xbq-Q1JFfQ?e=BlZwa7)可能会有所帮助。
> - 你需要熟悉`std::queue`的操作才能完成这部分。可以查看cppreference上的文档[这里](https://en.cppreference.com/w/cpp/container/queue)。
> - 提示：定义一个辅助函数来计算某个学生名字的首字母可能会很有用。然后你可以使用这个辅助函数来比较`name`的首字母与`students`中每个名字的首字母。

接下来，请实现`get_match`函数来找到你的“唯一真命天子/天女”：

> [!IMPORTANT]
>
> ### `get_match`
>
> 从所有可能匹配对象的队列中获取你的“唯一真命天子/天女”。你可以自行决定如何确定；选择某种方法从队列中获取一个学生，理想情况下比单纯的`pop()`更用心一些，但也不必特别复杂！可以考虑随机值或其他选择方法。
>
> 如果你的名字首字母在数据集中没有匹配对象，则打印`“NO MATCHES FOUND.”`。明年好运 😢

之后，在`short_answer.txt`中回答以下问题：

> [!IMPORTANT]
>
> ### `short_answer.txt`
>
> **问2：** 注意我们在队列中保存的是指向名字的指针，而不是名字本身。为什么在这个问题中这样做是理想的？如果存储名字的原始集合离开了作用域，而指针仍被引用，会发生什么？

## 🚀 提交说明

提交作业：
1. 请填写[此链接](https://forms.gle/Zv27LwmtCPz88Kg46)的反馈表。
2. 在 [Paperless](https://paperless.stanford.edu) 上提交你的作业！

你需要提交的文件是：

- `main.cpp`
- `short_answer.txt`

你可以在截止日期前多次重新提交。
