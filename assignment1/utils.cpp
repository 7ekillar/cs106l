/*
 * CS106L Assignment 1: SimpleEnroll
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 *
 * This file contains utility functions that you may find useful while
 * implementing the assignment. You don't need to modify anything here,
 * but feel free to look around.
 */
/*
 * CS106L 作业 1: SimpleEnroll
 * 由 Fabio Ibanez 创建，Jacob Roberts-Baca 修改。
 *
 * 本文件包含一些在完成作业时可能有用的实用函数。
 * 你不需要修改这里的任何内容，但可以随意查看。
 */

/**
 * Forward declarations of some important methods. Don't worry about these!
 * (unless you really want to).
 */
/**
 * 一些重要方法的前向声明。不必担心这些！
 * （除非你真的很想知道）。
 */
bool operator==(const Course& lhs, const Course& rhs);
std::ostream& operator<<(std::ostream& os, const Course& course);

/**
 * Splits a string by a delimiter and returns a vector of the split strings.
 * @param s     The string to split.
 * @param delim The delimiter to split by.
 * @returns     A vector of the split strings.
 */
/**
 * 使用分隔符分割字符串，并返回分割后的字符串向量。
 * @param s     要分割的字符串。
 * @param delim 用于分割的分隔符。
 * @returns     分割后的字符串向量。
 */
std::vector<std::string> split(const std::string& s, char delim) {
  std::vector<std::string> return_vec;
  std::stringstream ss(s);
  std::string token;
  while (std::getline(ss, token, delim)) {
    return_vec.push_back(token);
  }
  return return_vec;
}

/**
 * Deletes a Course from a vector of courses.
 * @param v    The vector of courses.
 * @param elem The course to delete.
 *
 * We will learn more about what's going on in this function in Weeks 3 and 5!
 */
/**
 * 从课程向量中删除一个 Course 对象。
 * @param v    课程向量。
 * @param elem 要删除的课程。
 *
 * 我们将在第 3 周和第 5 周更深入地了解这个函数内部的工作原理！
 */
void delete_elem_from_vector(std::vector<Course>& v, const Course& elem) {
  std::vector<Course>::iterator it = std::find(v.begin(), v.end(), elem);
  v.erase(it);
}

/**
 * Prints a vector of courses (for debugging purposes)!
 * @param vector_of_courses The vector of courses to print.
 */
/**
 * 打印课程向量（用于调试目的）！
 * @param vector_of_courses 要打印的课程向量。
 */
void print_courses(const std::vector<Course>& vector_of_courses) {
  for (const Course& course : vector_of_courses) {
    std::cout << course << std::endl;
  }
}

/* ========================================================================= *
 * Don't worry about anything beyond this point.                             *
 * (unless you are really curious and want to!)                              *
 * ========================================================================= */
/* ========================================================================= *
 * 不要担心此点之后的内容。                                                   *
 * （除非你真的很感兴趣并且想要了解！）                                        *
 * ========================================================================= */

bool operator==(const Course& lhs, const Course& rhs) {
  return lhs.title == rhs.title && lhs.number_of_units == rhs.number_of_units &&
         lhs.quarter == rhs.quarter;
}

std::ostream& operator<<(std::ostream& os, const Course& course) {
  os << course.title << ", " << course.number_of_units << ", " << course.quarter;
  return os;
}

template <typename T>
concept is_valid_course = requires(T t) {
  { T{"Standard C++ Programming", "1", "2023-2024 Winter"} };
  std::is_same_v<T, Course>;
};

int
run_autograder()
{
  auto run_program = [](std::string program,
                        std::initializer_list<std::string> args,
                        bool silent = false) {
    std::stringstream ss;

    ss << program;
    for (const auto& arg : args) {
      ss << ' ' << arg;
    }

    if (silent) {
#ifdef _WIN32
      ss << " >nul 2>&1";
#else
      ss << " >/dev/null 2>&1";
#endif
    }

    std::cout.flush();
    return system(ss.str().c_str());
  };

  std::string python;
  for (const auto& option :
       { "python", "python3", "/usr/bin/python3", "/usr/bin/python" }) {
    if (run_program(option, { "--version" }, true) == 0) {
      python = option;
      break;
    }
  }

  if (python.empty()) {
    std::cerr
      << "Python was not found on your system. Please install Python and "
                 "try again."
              << "\n";
    std::exit(1);
  }

  return run_program(python, { "autograder/autograder.py" });
}