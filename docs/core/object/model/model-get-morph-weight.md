[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).getMorphWeight()

Reads the weight of a blend-shape morph target, from `0.0` (no influence) to `1.0` (full influence), by exported name or by zero-based index. Multiple morphs can be active simultaneously.

```cpp
float getMorphWeight(const std::string& name);
float getMorphWeight(int id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-get-morph-weight.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-get-morph-weight.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
