---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).this[size_t i]

Component access by index (0: x, 1: y, 2: width, 3: height). The `const` overload returns a copy for reading; the non-`const` overload returns a reference so HUD layout code can write `r[2] = 200.0f`.

```cpp
float operator[](const size_t i) const;
float& operator[](const size_t i);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-operator-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-operator-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
