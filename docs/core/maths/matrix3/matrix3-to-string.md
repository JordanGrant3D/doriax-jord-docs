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

## [Matrix3](matrix3.md).toString()

Returns `"Matrix3(m00, m01, ...)"` in row-major print order via `std::to_string`. Print it with `Log::print` when debugging orientations.

```cpp
std::string toString() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-to-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-to-string.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
