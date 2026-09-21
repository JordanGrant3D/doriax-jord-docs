---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).this[int iCol]

Column access by index: the `const` overload returns a read-only column pointer, the non-`const` one a writable pointer (`m[col][row]`). Edits translation (column 3) directly.

```cpp
const float* operator[](int iCol) const;
float* operator[](int iCol);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
