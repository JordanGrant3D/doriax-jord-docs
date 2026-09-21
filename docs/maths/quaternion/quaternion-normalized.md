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

## [Quaternion](quaternion.md).normalized()

Returns a normalized unit-length copy without modifying the original. Keeps the raw facing available for debugging afterwards.

```cpp
Quaternion normalized() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-normalized.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-normalized.h"
```
