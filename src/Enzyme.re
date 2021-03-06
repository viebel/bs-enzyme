type shallowWrapper;
type node = ReasonReact.reactElement;
type selector = string;
type predicate = shallowWrapper => bool;

external shallow : node => shallowWrapper = "" [@@bs.module "enzyme"];
external find : selector => shallowWrapper = "find" [@@bs.send.pipe: shallowWrapper];
external findWhere : predicate => shallowWrapper = "findWhere" [@@bs.send.pipe: shallowWrapper];
external filter : selector => shallowWrapper = "filter" [@@bs.send.pipe: shallowWrapper];
external filterWhere : predicate => shallowWrapper = "filterWhere" [@@bs.send.pipe: shallowWrapper];
external contains : node => bool = "contains" [@@bs.send.pipe: shallowWrapper];
external containsAll : array node => bool = "contains" [@@bs.send.pipe: shallowWrapper];
external containsMatchingElement : node => bool = "containsMatchingElement" [@@bs.send.pipe: shallowWrapper];
external containsAllMatchingElements : array node => bool = "containsAllMatchingElements" [@@bs.send.pipe: shallowWrapper];
external containsAnyMatchingElements : array node => bool = "containsAnyMatchingElements" [@@bs.send.pipe: shallowWrapper];
external equals : node => bool = "equals" [@@bs.send.pipe: shallowWrapper];
external matchesElement : node => bool = "matchesElement" [@@bs.send.pipe: shallowWrapper];
external hasClass : string => bool = "hasClass" [@@bs.send.pipe: shallowWrapper];
external is : selector => bool = "is" [@@bs.send.pipe: shallowWrapper];
external exists : shallowWrapper => bool = "exists" [@@bs.send];
external isEmptyRender : shallowWrapper => bool = "isEmptyRender" [@@bs.send];
external not : selector => shallowWrapper = "not" [@@bs.send.pipe: shallowWrapper];
external children : shallowWrapper => shallowWrapper = "children" [@@bs.send];
external childAt : int => shallowWrapper = "childAt" [@@bs.send.pipe: shallowWrapper];
external parents : shallowWrapper => shallowWrapper = "parents" [@@bs.send];
external parent : shallowWrapper => shallowWrapper = "parent" [@@bs.send];
external closest : selector => shallowWrapper = "closest" [@@bs.send.pipe: shallowWrapper];
external unmount : shallowWrapper => shallowWrapper = "unmount" [@@bs.send];
external text : shallowWrapper => string = "text" [@@bs.send];
external html : shallowWrapper => string = "html" [@@bs.send];
external get : int => node = "get" [@@bs.send.pipe: shallowWrapper];
external getNode : shallowWrapper => node = "getNode" [@@bs.send];
external getNodes : shallowWrapper => array node = "getNodes" [@@bs.send];
external at : int => shallowWrapper = "at" [@@bs.send.pipe: shallowWrapper];
external first : shallowWrapper => shallowWrapper = "first" [@@bs.send];
external last : shallowWrapper => shallowWrapper = "last" [@@bs.send];

/* TODO: Find a better way to do this */
external simulate : string  => unit = "simulate" [@@bs.send.pipe: shallowWrapper];
external simulate1 : string => 'a => unit = "simulate" [@@bs.send.pipe: shallowWrapper];
external simulate2 : string => 'a => 'b => unit = "simulate" [@@bs.send.pipe: shallowWrapper];
external simulate3 : string => 'a => 'b => 'c => unit = "simulate" [@@bs.send.pipe: shallowWrapper];
external simulate4 : string => 'a => 'b => 'c => 'd => unit = "simulate" [@@bs.send.pipe: shallowWrapper];
external simulateMany : string => args::(array 'a) => unit = "simulate" [@@bs.splice] [@@bs.send.pipe: shallowWrapper];

external jsState : shallowWrapper => Js.t {..} = "state" [@@bs.send];
external jsStateFor : string => Js.t {..} = "state" [@@bs.send.pipe: shallowWrapper];
external setJsState : Js.t {..} => unit = "setState" [@@bs.send.pipe: shallowWrapper];
external jsContext : shallowWrapper => Js.t {..} = "context" [@@bs.send];
external jsContextFor : string => Js.t {..} = "context" [@@bs.send.pipe: shallowWrapper];
external setJsContext : Js.t {..} => unit = "setContext" [@@bs.send.pipe: shallowWrapper];
external jsProps : shallowWrapper => Js.t {..} = "props" [@@bs.send];
external jsPropFor : string => Js.t {..} = "prop" [@@bs.send.pipe: shallowWrapper];
external setJsProps : Js.t {..} => unit = "setProps" [@@bs.send.pipe: shallowWrapper];
external key : shallowWrapper => string = "key" [@@bs.send];

let state shallowWrapper: 'state => (jsState shallowWrapper)##reasonState;

external instance : shallowWrapper => node = "instance" [@@bs.send];
external update : shallowWrapper => unit = "update" [@@bs.send];
external debug : shallowWrapper => string = "debug" [@@bs.send];
external type_ : shallowWrapper => string = "type" [@@bs.send];
external name : shallowWrapper => string = "name" [@@bs.send];

external forEach : (shallowWrapper => unit) => shallowWrapper = "forEach" [@@bs.send.pipe: shallowWrapper];
external map : (shallowWrapper => 'a) => array 'a = "forEach" [@@bs.send.pipe: shallowWrapper];
external foldLeft : ('a => shallowWrapper => 'a) => 'a => 'a = "reduce" [@@bs.send.pipe: shallowWrapper];
external foldRight : ('a => shallowWrapper => 'a) => 'a => 'a = "reduceRight" [@@bs.send.pipe: shallowWrapper];

external length : shallowWrapper => int = "length" [@@bs.get];


type adapter;
type js_obj_with_adapter = Js.t {. adapter : adapter};

external configure : js_obj_with_adapter => adapter = "configure" [@@bs.module "enzyme"];
external react_16_adapter : unit => adapter = "enzyme-adapter-react-16" [@@bs.module] [@@bs.new];

let configureEnzyme (adapter: adapter) => configure {"adapter": adapter};





