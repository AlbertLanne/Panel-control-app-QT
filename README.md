<a href="http://fvcproductions.com"><img src="https://i.imgur.com/NQbBWTp.png" title="c++ app made in qt" alt="docker container SQL"></a>


# QtBddApp  

> A Boilerplate project of a Qt app made in cpp, using a SQL docker container using a BDD (Database).

[![Build Status](http://img.shields.io/travis/badges/badgerbadgerbadger.svg?style=flat-square)](https://travis-ci.org/badges/badgerbadgerbadger) [![Coverage Status](http://img.shields.io/coveralls/badges/badgerbadgerbadger.svg?style=flat-square)](https://coveralls.io/r/badges/badgerbadgerbadger)
 [![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](http://badges.mit-license.org)

***Object diagram***


[![The diagram of the structure project](https://i.imgur.com/iI6H5mV.png)]()


## Table of Contents 

> If your `README` has a lot of info, section headers might be nice.

- [Installation](#installation)
- [Features](#features)
- [Contributing](#contributing)
- [Team](#team)
- [FAQ](#faq)
- [Support](#support)
- [License](#license)


---

## Example Connection to a DB

```cpp
// global
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
// global
    db.setHostName("0.0.0.0");
    db.setDatabaseName("gestmagasin");
    db.setUserName("root");
    db.setPassword("123");
    qDebug()<< "Status =>("<<db.open() <<") if true, the connection work";

```

---

## Installation

-You need to have QT Creator

-Docker

### Clone

- Clone this repo to your local machine using `https://github.com/AlbertLanne/QtBddApp.git`


## <h1> == Part in construction == </h1> 


### Setup

- If you want more syntax highlighting, format your code like this:

> update and install this package first

```shell
$ brew update
$ brew install fvcproductions
```

> now install npm and bower packages

```shell
$ npm install
$ bower install
```

- For all the possible languages that support syntax highlithing on GitHub (which is basically all of them), refer <a href="https://github.com/github/linguist/blob/master/lib/linguist/languages.yml" target="_blank">here</a>.

---

## Features
## Usage (Optional)
## Documentation (Optional)
## Tests (Optional)

- Going into more detail on code and technologies used
- I utilized this nifty <a href="https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet" target="_blank">Markdown Cheatsheet</a> for this sample `README`.

---

## Contributing

> To get started...

### Step 1

- **Option 1**
    - 🍴 Fork this repo!

- **Option 2**
    - 👯 Clone this repo to your local machine using `https://github.com/joanaz/HireDot2.git`

### Step 2

- **HACK AWAY!** 🔨🔨🔨

### Step 3

- 🔃 Create a new pull request using <a href="https://github.com/AlbertLanne/QtBddApp" target="_blank">`https://github.com/AlbertLanne/QtBddApp`</a>.

---

## Team

> Or Contributors/People

| <a href="http://fvcproductions.com" target="_blank">**FVCproductions**</a> | <a href="http://fvcproductions.com" target="_blank">**FVCproductions**</a> | <a href="http://fvcproductions.com" target="_blank">**FVCproductions**</a> |
| :---: |:---:| :---:|
| [![FVCproductions](https://avatars3.githubusercontent.com/u/45398579?s=460&v=4)](http://albertfoundation.com/)    | [![AlbertL](https://avatars1.githubusercontent.com/u/45399820?s=200&v=4)](http://albertfoundation.com/) | [![FVCproductions](https://avatars1.githubusercontent.com/u/45399820?s=200&v=4)](http://albertfoundation.com/)  |
| <a href="https://github.com/AlbertLanne" target="_blank">`github.com/AlbertLanne`</a> | <a href="https://github.com/AlbertLanne" target="_blank">`github.com/AlbertLanne`</a> | <a href="https://github.com/AlbertLanne" target="_blank">`github.com/AlbertLanne`</a> |

- You can just grab their GitHub profile image URL
- You should probably resize their picture using `?s=200` at the end of the image URL.

---

## FAQ

- **How do I do *specifically* so and so?**
    - No problem! Just do this.

---

## Support

Reach out to me at one of the following places!

- Website at <a href="http://fvcproductions.com" target="_blank">`fvcproductions.com`</a>
- Twitter at <a href="http://twitter.com/fvcproductions" target="_blank">`@fvcproductions`</a>
- Insert more social links here.

---


## License

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](http://badges.mit-license.org)

- **[MIT license](http://opensource.org/licenses/mit-license.php)**


