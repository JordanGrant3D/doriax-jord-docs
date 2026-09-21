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

## [Matrix3](matrix3.md).operator=(const Matrix3& m)

Copies all nine entries via `memcpy` and returns `*this`. Snapshots a tuned orientation before experimenting on the copy.

```cpp
Matrix3& operator=(const Matrix3& m);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
