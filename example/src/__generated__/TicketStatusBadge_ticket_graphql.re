
/* @generated */

%bs.raw
"/* @generated */";

module Types = {
  type enum_TicketStatus = pri [> | `Done | `OnHold | `Progress | `Rejected];

  [@ocaml.warning "-30"];

  type fragment = {
    status: enum_TicketStatus,
    dbId: string,
  };
};

module Internal = {
  type fragmentRaw;
  let fragmentConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {} |json}
  ];
  let fragmentConverterMap = ();
  let convertFragment = v =>
    v->RescriptRelay.convertObj(
      fragmentConverter,
      fragmentConverterMap,
      Js.undefined,
    );
};

type t;
type fragmentRef;
external getFragmentRef:
  RescriptRelay.fragmentRefs([> | `TicketStatusBadge_ticket]) => fragmentRef =
  "%identity";

module Utils = {
  external ticketStatus_toString: Types.enum_TicketStatus => string =
    "%identity";
};

type relayOperationNode;

type operationType = RescriptRelay.fragmentNode(relayOperationNode);



let node: operationType = [%raw {json| {
  "argumentDefinitions": [],
  "kind": "Fragment",
  "metadata": null,
  "name": "TicketStatusBadge_ticket",
  "selections": [
    {
      "alias": null,
      "args": null,
      "kind": "ScalarField",
      "name": "status",
      "storageKey": null
    },
    {
      "alias": null,
      "args": null,
      "kind": "ScalarField",
      "name": "dbId",
      "storageKey": null
    }
  ],
  "type": "Ticket",
  "abstractKey": null
} |json}];


