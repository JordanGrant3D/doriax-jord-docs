---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix3](matrix3.md).this[int iCol]

Column access by index: the `const` overload returns a read-only column pointer, the non-`const` one a writable pointer (`m[col][row]`). Drives per-column basis edits.

```cpp
const float* operator[](int iCol) const;
float* operator[](int iCol);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-operator-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-operator-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
