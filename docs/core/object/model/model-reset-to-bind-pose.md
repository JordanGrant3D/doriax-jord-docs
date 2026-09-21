[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).resetToBindPose()

Resets every imported node back to the bind pose defined in the model file, clearing any programmatic or animation-driven overrides. Useful when switching between animations or after stopping all playback.

```cpp
void resetToBindPose();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-reset-to-bind-pose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-reset-to-bind-pose.h"
```
