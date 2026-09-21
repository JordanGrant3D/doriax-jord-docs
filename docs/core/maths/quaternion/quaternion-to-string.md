---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).toString()

Returns `"Quaternion(w, x, y, z)"` via `std::to_string` (note `w` prints first). Print it with `Log::print` when debugging facings.

```cpp
std::string toString() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-to-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-to-string.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
