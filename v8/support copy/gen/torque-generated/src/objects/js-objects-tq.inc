class JSReceiver;
class JSObject;
class JSObjectWithEmbedderSlots;
class JSCustomElementsObject;
class JSSpecialObject;
class JSExternalObject;
class JSGlobalProxy;
class JSGlobalObject;
class JSPrimitiveWrapper;
class JSMessageObject;
class JSDate;
class JSAsyncFromSyncIterator;
class JSStringIterator;
// Alias for HeapObject::IsJSReceiver() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
V8_EXPORT_PRIVATE bool IsJSReceiver_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
template <class D, class P>
class TorqueGeneratedJSReceiver : public P {
  static_assert(
      std::is_same<JSReceiver, D>::value,
      "Use this class as direct base for JSReceiver.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedJSReceiver.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSReceiver<D,P>;

  // Torque type: (Smi | class FixedArrayBase | class PropertyArray | class SwissNameDictionary)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
  inline Object properties_or_hash() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
  inline Object properties_or_hash(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
  inline void set_properties_or_hash(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
  V8_EXPORT_PRIVATE void JSReceiverVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
  static constexpr int kPropertiesOrHashOffset = P::kHeaderSize;
  static constexpr int kPropertiesOrHashOffsetEnd = kPropertiesOrHashOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kPropertiesOrHashOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kPropertiesOrHashOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kPropertiesOrHashOffsetEnd + 1;
  static constexpr int kHeaderSize = kPropertiesOrHashOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSReceiver() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSReceiver, DAlias>::value,
        "class TorqueGeneratedJSReceiver should be used as direct base for JSReceiver.");
  }

 protected:
  inline explicit TorqueGeneratedJSReceiver(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSReceiver(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
V8_EXPORT_PRIVATE bool IsJSObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
template <class D, class P>
class TorqueGeneratedJSObject : public P {
  static_assert(
      std::is_same<JSObject, D>::value,
      "Use this class as direct base for JSObject.");
  static_assert(
      std::is_same<JSReceiver, P>::value,
      "Pass in JSReceiver as second template parameter for TorqueGeneratedJSObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
  inline FixedArrayBase elements() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
  inline FixedArrayBase elements(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
  inline void set_elements(FixedArrayBase value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
  V8_EXPORT_PRIVATE void JSObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
  static constexpr int kElementsOffset = P::kHeaderSize;
  static constexpr int kElementsOffsetEnd = kElementsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kElementsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kElementsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kElementsOffsetEnd + 1;
  static constexpr int kHeaderSize = kElementsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSObject, DAlias>::value,
        "class TorqueGeneratedJSObject should be used as direct base for JSObject.");
  }

 protected:
  inline explicit TorqueGeneratedJSObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSObjectWithEmbedderSlots() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
V8_EXPORT_PRIVATE bool IsJSObjectWithEmbedderSlots_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
template <class D, class P>
class TorqueGeneratedJSObjectWithEmbedderSlots : public P {
  static_assert(
      std::is_same<JSObjectWithEmbedderSlots, D>::value,
      "Use this class as direct base for JSObjectWithEmbedderSlots.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSObjectWithEmbedderSlots.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSObjectWithEmbedderSlots<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
  V8_EXPORT_PRIVATE void JSObjectWithEmbedderSlotsVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSObjectWithEmbedderSlots() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSObjectWithEmbedderSlots, DAlias>::value,
        "class TorqueGeneratedJSObjectWithEmbedderSlots should be used as direct base for JSObjectWithEmbedderSlots.");
  }

 protected:
  inline explicit TorqueGeneratedJSObjectWithEmbedderSlots(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSObjectWithEmbedderSlots(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSCustomElementsObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
V8_EXPORT_PRIVATE bool IsJSCustomElementsObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
template <class D, class P>
class TorqueGeneratedJSCustomElementsObject : public P {
  static_assert(
      std::is_same<JSCustomElementsObject, D>::value,
      "Use this class as direct base for JSCustomElementsObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSCustomElementsObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSCustomElementsObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
  V8_EXPORT_PRIVATE void JSCustomElementsObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSCustomElementsObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSCustomElementsObject, DAlias>::value,
        "class TorqueGeneratedJSCustomElementsObject should be used as direct base for JSCustomElementsObject.");
  }

 protected:
  inline explicit TorqueGeneratedJSCustomElementsObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSCustomElementsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSSpecialObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
V8_EXPORT_PRIVATE bool IsJSSpecialObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
template <class D, class P>
class TorqueGeneratedJSSpecialObject : public P {
  static_assert(
      std::is_same<JSSpecialObject, D>::value,
      "Use this class as direct base for JSSpecialObject.");
  static_assert(
      std::is_same<JSCustomElementsObject, P>::value,
      "Pass in JSCustomElementsObject as second template parameter for TorqueGeneratedJSSpecialObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSSpecialObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
  V8_EXPORT_PRIVATE void JSSpecialObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSSpecialObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSSpecialObject, DAlias>::value,
        "class TorqueGeneratedJSSpecialObject should be used as direct base for JSSpecialObject.");
  }

 protected:
  inline explicit TorqueGeneratedJSSpecialObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSSpecialObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSExternalObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
V8_EXPORT_PRIVATE bool IsJSExternalObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
template <class D, class P>
class TorqueGeneratedJSExternalObject : public P {
  static_assert(
      std::is_same<JSExternalObject, D>::value,
      "Use this class as direct base for JSExternalObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSExternalObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSExternalObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSExternalObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
  V8_EXPORT_PRIVATE void JSExternalObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=50
  static constexpr int kValueOffset = P::kHeaderSize;
  static constexpr int kValueOffsetEnd = kValueOffset + kExternalPointerSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kHeaderSize = kValueOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSExternalObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSExternalObject, DAlias>::value,
        "class TorqueGeneratedJSExternalObject should be used as direct base for JSExternalObject.");
  }

 protected:
  inline explicit TorqueGeneratedJSExternalObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSExternalObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSGlobalProxy() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
V8_EXPORT_PRIVATE bool IsJSGlobalProxy_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
template <class D, class P>
class TorqueGeneratedJSGlobalProxy : public P {
  static_assert(
      std::is_same<JSGlobalProxy, D>::value,
      "Use this class as direct base for JSGlobalProxy.");
  static_assert(
      std::is_same<JSSpecialObject, P>::value,
      "Pass in JSSpecialObject as second template parameter for TorqueGeneratedJSGlobalProxy.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSGlobalProxy<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
  inline Object native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
  inline Object native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
  inline void set_native_context(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSGlobalProxy)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
  V8_EXPORT_PRIVATE void JSGlobalProxyVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
  static constexpr int kNativeContextOffset = P::kHeaderSize;
  static constexpr int kNativeContextOffsetEnd = kNativeContextOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kHeaderSize = kNativeContextOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSGlobalProxy() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSGlobalProxy, DAlias>::value,
        "class TorqueGeneratedJSGlobalProxy should be used as direct base for JSGlobalProxy.");
  }

 protected:
  inline explicit TorqueGeneratedJSGlobalProxy(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSGlobalProxy(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSGlobalObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
V8_EXPORT_PRIVATE bool IsJSGlobalObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
template <class D, class P>
class TorqueGeneratedJSGlobalObject : public P {
  static_assert(
      std::is_same<JSGlobalObject, D>::value,
      "Use this class as direct base for JSGlobalObject.");
  static_assert(
      std::is_same<JSSpecialObject, P>::value,
      "Pass in JSSpecialObject as second template parameter for TorqueGeneratedJSGlobalObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSGlobalObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
  inline NativeContext native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
  inline NativeContext native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
  inline void set_native_context(NativeContext value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
  inline JSGlobalProxy global_proxy() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
  inline JSGlobalProxy global_proxy(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
  inline void set_global_proxy(JSGlobalProxy value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSGlobalObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
  V8_EXPORT_PRIVATE void JSGlobalObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
  static constexpr int kNativeContextOffset = P::kHeaderSize;
  static constexpr int kNativeContextOffsetEnd = kNativeContextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
  static constexpr int kGlobalProxyOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kGlobalProxyOffsetEnd = kGlobalProxyOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kGlobalProxyOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kGlobalProxyOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kGlobalProxyOffsetEnd + 1;
  static constexpr int kHeaderSize = kGlobalProxyOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSGlobalObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSGlobalObject, DAlias>::value,
        "class TorqueGeneratedJSGlobalObject should be used as direct base for JSGlobalObject.");
  }

 protected:
  inline explicit TorqueGeneratedJSGlobalObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSGlobalObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSPrimitiveWrapper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
V8_EXPORT_PRIVATE bool IsJSPrimitiveWrapper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
template <class D, class P>
class TorqueGeneratedJSPrimitiveWrapper : public P {
  static_assert(
      std::is_same<JSPrimitiveWrapper, D>::value,
      "Use this class as direct base for JSPrimitiveWrapper.");
  static_assert(
      std::is_same<JSCustomElementsObject, P>::value,
      "Pass in JSCustomElementsObject as second template parameter for TorqueGeneratedJSPrimitiveWrapper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSPrimitiveWrapper<D,P>;

  // Torque type: JSAny
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
  inline Object value() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
  inline Object value(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
  inline void set_value(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSPrimitiveWrapper)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
  V8_EXPORT_PRIVATE void JSPrimitiveWrapperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
  static constexpr int kValueOffset = P::kHeaderSize;
  static constexpr int kValueOffsetEnd = kValueOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kHeaderSize = kValueOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSPrimitiveWrapper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSPrimitiveWrapper, DAlias>::value,
        "class TorqueGeneratedJSPrimitiveWrapper should be used as direct base for JSPrimitiveWrapper.");
  }

 protected:
  inline explicit TorqueGeneratedJSPrimitiveWrapper(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSPrimitiveWrapper(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSMessageObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
V8_EXPORT_PRIVATE bool IsJSMessageObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
template <class D, class P>
class TorqueGeneratedJSMessageObject : public P {
  static_assert(
      std::is_same<JSMessageObject, D>::value,
      "Use this class as direct base for JSMessageObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSMessageObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSMessageObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
  inline int message_type() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
  inline void set_message_type(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
  inline Object argument() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
  inline Object argument(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
  inline void set_argument(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
  inline Script script() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
  inline Script script(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
  inline void set_script(Script value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
  inline Object stack_frames() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
  inline Object stack_frames(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
  inline void set_stack_frames(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class SharedFunctionInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
  inline HeapObject shared_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
  inline HeapObject shared_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
  inline void set_shared_info(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
  inline int bytecode_offset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
  inline void set_bytecode_offset(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
  inline int start_position() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
  inline void set_start_position(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
  inline int end_position() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
  inline void set_end_position(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
  inline int error_level() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
  inline void set_error_level(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSMessageObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
  V8_EXPORT_PRIVATE void JSMessageObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
  static constexpr int kMessageTypeOffset = P::kHeaderSize;
  static constexpr int kMessageTypeOffsetEnd = kMessageTypeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
  static constexpr int kArgumentOffset = kMessageTypeOffsetEnd + 1;
  static constexpr int kArgumentOffsetEnd = kArgumentOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
  static constexpr int kScriptOffset = kArgumentOffsetEnd + 1;
  static constexpr int kScriptOffsetEnd = kScriptOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
  static constexpr int kStackFramesOffset = kScriptOffsetEnd + 1;
  static constexpr int kStackFramesOffsetEnd = kStackFramesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
  static constexpr int kSharedInfoOffset = kStackFramesOffsetEnd + 1;
  static constexpr int kSharedInfoOffsetEnd = kSharedInfoOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
  static constexpr int kBytecodeOffsetOffset = kSharedInfoOffsetEnd + 1;
  static constexpr int kBytecodeOffsetOffsetEnd = kBytecodeOffsetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
  static constexpr int kStartPositionOffset = kBytecodeOffsetOffsetEnd + 1;
  static constexpr int kStartPositionOffsetEnd = kStartPositionOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
  static constexpr int kEndPositionOffset = kStartPositionOffsetEnd + 1;
  static constexpr int kEndPositionOffsetEnd = kEndPositionOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
  static constexpr int kErrorLevelOffset = kEndPositionOffsetEnd + 1;
  static constexpr int kErrorLevelOffsetEnd = kErrorLevelOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kErrorLevelOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kErrorLevelOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kErrorLevelOffsetEnd + 1;
  static constexpr int kHeaderSize = kErrorLevelOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSMessageObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSMessageObject, DAlias>::value,
        "class TorqueGeneratedJSMessageObject should be used as direct base for JSMessageObject.");
  }

 protected:
  inline explicit TorqueGeneratedJSMessageObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSMessageObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSDate() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
V8_EXPORT_PRIVATE bool IsJSDate_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
template <class D, class P>
class TorqueGeneratedJSDate : public P {
  static_assert(
      std::is_same<JSDate, D>::value,
      "Use this class as direct base for JSDate.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSDate.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSDate<D,P>;

  // Torque type: NumberOrUndefined
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
  inline Object value() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
  inline Object value(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
  inline void set_value(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
  inline Object year() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
  inline Object year(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
  inline void set_year(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
  inline Object month() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
  inline Object month(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
  inline void set_month(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
  inline Object day() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
  inline Object day(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
  inline void set_day(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
  inline Object weekday() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
  inline Object weekday(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
  inline void set_weekday(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
  inline Object hour() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
  inline Object hour(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
  inline void set_hour(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
  inline Object min() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
  inline Object min(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
  inline void set_min(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
  inline Object sec() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
  inline Object sec(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
  inline void set_sec(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Smi | NaN)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
  inline Object cache_stamp() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
  inline Object cache_stamp(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
  inline void set_cache_stamp(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSDate)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
  V8_EXPORT_PRIVATE void JSDateVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
  static constexpr int kValueOffset = P::kHeaderSize;
  static constexpr int kValueOffsetEnd = kValueOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
  static constexpr int kYearOffset = kValueOffsetEnd + 1;
  static constexpr int kYearOffsetEnd = kYearOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
  static constexpr int kMonthOffset = kYearOffsetEnd + 1;
  static constexpr int kMonthOffsetEnd = kMonthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
  static constexpr int kDayOffset = kMonthOffsetEnd + 1;
  static constexpr int kDayOffsetEnd = kDayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
  static constexpr int kWeekdayOffset = kDayOffsetEnd + 1;
  static constexpr int kWeekdayOffsetEnd = kWeekdayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
  static constexpr int kHourOffset = kWeekdayOffsetEnd + 1;
  static constexpr int kHourOffsetEnd = kHourOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
  static constexpr int kMinOffset = kHourOffsetEnd + 1;
  static constexpr int kMinOffsetEnd = kMinOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
  static constexpr int kSecOffset = kMinOffsetEnd + 1;
  static constexpr int kSecOffsetEnd = kSecOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
  static constexpr int kCacheStampOffset = kSecOffsetEnd + 1;
  static constexpr int kCacheStampOffsetEnd = kCacheStampOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCacheStampOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCacheStampOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCacheStampOffsetEnd + 1;
  static constexpr int kHeaderSize = kCacheStampOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSDate() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSDate, DAlias>::value,
        "class TorqueGeneratedJSDate should be used as direct base for JSDate.");
  }

 protected:
  inline explicit TorqueGeneratedJSDate(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSDate(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSAsyncFromSyncIterator() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
V8_EXPORT_PRIVATE bool IsJSAsyncFromSyncIterator_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
template <class D, class P>
class TorqueGeneratedJSAsyncFromSyncIterator : public P {
  static_assert(
      std::is_same<JSAsyncFromSyncIterator, D>::value,
      "Use this class as direct base for JSAsyncFromSyncIterator.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSAsyncFromSyncIterator.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSAsyncFromSyncIterator<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
  inline JSReceiver sync_iterator() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
  inline JSReceiver sync_iterator(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
  inline void set_sync_iterator(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
  inline Object next() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
  inline Object next(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
  inline void set_next(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSAsyncFromSyncIterator)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
  V8_EXPORT_PRIVATE void JSAsyncFromSyncIteratorVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
  static constexpr int kSyncIteratorOffset = P::kHeaderSize;
  static constexpr int kSyncIteratorOffsetEnd = kSyncIteratorOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
  static constexpr int kNextOffset = kSyncIteratorOffsetEnd + 1;
  static constexpr int kNextOffsetEnd = kNextOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kNextOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kNextOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kNextOffsetEnd + 1;
  static constexpr int kHeaderSize = kNextOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSAsyncFromSyncIterator() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSAsyncFromSyncIterator, DAlias>::value,
        "class TorqueGeneratedJSAsyncFromSyncIterator should be used as direct base for JSAsyncFromSyncIterator.");
  }

 protected:
  inline explicit TorqueGeneratedJSAsyncFromSyncIterator(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSAsyncFromSyncIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSStringIterator() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
V8_EXPORT_PRIVATE bool IsJSStringIterator_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
template <class D, class P>
class TorqueGeneratedJSStringIterator : public P {
  static_assert(
      std::is_same<JSStringIterator, D>::value,
      "Use this class as direct base for JSStringIterator.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSStringIterator.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSStringIterator<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
  inline String string() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
  inline String string(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
  inline void set_string(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
  inline int index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
  inline void set_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSStringIterator)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
  V8_EXPORT_PRIVATE void JSStringIteratorVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
  static constexpr int kStringOffset = P::kHeaderSize;
  static constexpr int kStringOffsetEnd = kStringOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
  static constexpr int kIndexOffset = kStringOffsetEnd + 1;
  static constexpr int kIndexOffsetEnd = kIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kHeaderSize = kIndexOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSStringIterator() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSStringIterator, DAlias>::value,
        "class TorqueGeneratedJSStringIterator should be used as direct base for JSStringIterator.");
  }

 protected:
  inline explicit TorqueGeneratedJSStringIterator(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSStringIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

