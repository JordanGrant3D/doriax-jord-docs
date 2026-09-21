[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## FileData

Abstract streaming interface shared by [**File**](../file/file.md) and `Data`. `newFile` constructs the concrete type: pass `useHandle = true` to request a disk `File`, or omit it (or pass `false`) for an in-memory `Data` buffer. In a native export with resource packing enabled, a packed path still returns `Data` even when a handle was requested, because a packed entry has no filesystem file to open. The CharacterController tutorial uses it to read save/tutorial configs and replay buffers.

## Properties

`FileData` exposes no public properties. Path helpers and typed read/write access are provided through its static and instance methods below.

## Constructors

`FileData` is abstract and exposes no public constructors. Create instances with the static [**newFile**](file-data-new-file.md) factory.

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**~FileData**](file-data-destructor.md) |  | Virtual destructor. |
| `FileData*` | [**newFile**](file-data-new-file.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) useHandle = false | Creates an in-memory `Data` buffer, or a disk `File` when `useHandle` is `true`. |
| `FileData*` | [**newFile**](file-data-new-file.md) | `const char*` aFilename, [**bool**](https://en.cppreference.com/cpp/keyword/bool) useHandle = false | Opens `aFilename` as `Data` or `File` depending on `useHandle`. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getBaseDir**](file-data-get-base-dir.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filepath | Directory portion of `filepath`, with trailing separator. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getFilePathExtension**](file-data-get-file-path-extension.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filepath | Extension of `filepath` without the dot, or empty when there is none. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getSystemPath**](file-data-get-system-path.md) | [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) path | Resolves `data://`, `asset://`, `lua://`, and `shader://` prefixes to real paths. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**read8**](file-data-read-8.md) |  | Reads one byte and advances the cursor. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**read16**](file-data-read-16.md) |  | Reads two bytes and advances the cursor. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**read32**](file-data-read-32.md) |  | Reads four bytes and advances the cursor. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**eof**](file-data-eof.md) |  | Whether the end of the stream has been reached. Pure virtual. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**read**](file-data-read.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**char**](https://en.cppreference.com/cpp/keyword/char)\* aDst, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) aBytes | Reads up to `aBytes` into `aDst`. Pure virtual. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**write**](file-data-write.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**char**](https://en.cppreference.com/cpp/keyword/char)\* aSrc, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) aBytes | Writes `aBytes` from `aSrc`. Pure virtual. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**length**](file-data-length.md) |  | Total stream size in bytes. Pure virtual. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**seek**](file-data-seek.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) aOffset | Moves the cursor to absolute byte offset `aOffset`. Pure virtual. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**pos**](file-data-pos.md) |  | Current cursor position in bytes. Pure virtual. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**readString**](file-data-read-string.md) |  | Reads the whole remaining stream into a string. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**readString**](file-data-read-string.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) stringlen | Reads exactly `stringlen` bytes into a string. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**writeString**](file-data-write-string.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& s | Writes the contents of `s`. Returns bytes written. |
