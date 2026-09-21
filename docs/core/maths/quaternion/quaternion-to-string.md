[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
